#include "map"
#include "set"
#include <iostream>
#include "cassert"
#include "exception"
#include "sstream"

using namespace std;
using syn = map<string, set<string>>;

//тестируемые функции
void addsynonims(map<string, set<string>>& synonims,const string first_word,const string second_word) {
    synonims[second_word].insert(first_word);
    synonims[first_word].insert(second_word);
}
size_t getsyncount(map<string, set<string>>& synonims, const string word) {
    return synonims[word].size();
}
bool aresynonims(map<string, set<string>>& synonims, const string first_word, const string second_word) {  
    return synonims[first_word].count(second_word);
}
int sum(int x, int y) {
    return x + y;
}

//тестовые функции
template <class T,class U>
void AssertEqual(const T& t, const U& u,int hint) {
    if (t != u) {
        ostringstream os;
        os << "assertion failed: " /*<< t << " != " << u*/ << "Line: " << hint;
        throw runtime_error(os.str());
    }
}
void Assert(bool b, int hint) {
    AssertEqual(b, true, hint);
}
void test_sum() {
    AssertEqual(sum(2, 3) , 5,39);
    AssertEqual(sum(-2, -3) , -5,40);
    AssertEqual(sum(-2, 0) , -2,41);
    AssertEqual(sum(2, -2) , 0,42);
    cerr << "test sum ok" << endl;
}
void test_addsynonims() {
    {
        syn empty;
        addsynonims(empty, "a", "b");
        const syn expected = { 
            {"a",{"b"}},
            {"b",{"a"}},
        };
        AssertEqual(empty, expected, 50);
        //assert(empty == expected);
    }  
    {
        syn synn = {
            {"a",{"b"}},
            {"c",{"b"}},
            {"b",{"a","c"}},
        };
        addsynonims(synn, "a", "c");
        syn expected = {
            {"a",{"b","c"}},
            {"c",{"b","a"}},
            {"b",{"a","c"}},
        };
        AssertEqual(synn, expected, 64);
        //assert(synn == expected);
        cerr << "test addsynonims ok" << endl;
    }
}
void test_getsyncount() {
    {
        {
            syn empty;
            AssertEqual(getsyncount(empty, "a"), 0u,72);
        }
        {
            syn synn = {
            {"a",{"b","c"}},
            {"b",{"a"}},
            {"c",{"a"}},
            };
            AssertEqual(getsyncount(synn, "a") , 2u,80);
            AssertEqual(getsyncount(synn, "b"), 1u,81);
            AssertEqual(getsyncount(synn, "z"), 0u,82);
        }
        cerr << "get synonims count ok" << endl;
    }
}
void test_aresynonims() {
    {
        syn empty;
        assert(!aresynonims(empty, "a", "b"));
        assert(!aresynonims(empty, "b", "a"));
    }
    {
        syn synn = {
            {"a",{"b","c"}},
            {"b",{"a"}},
            {"c",{"a"}},
        };
        assert(aresynonims(synn, "a", "b"));
        assert(aresynonims(synn, "b", "a"));
        assert(aresynonims(synn, "a", "c"));
        assert(aresynonims(synn, "c", "a"));
        assert(!aresynonims(synn, "c", "b"));
        assert(!aresynonims(synn, "b", "c"));
    }
    cerr << "are synonims ok" << endl;
}
class testrunner {
public:
    template <class testfunk>
    void runtest(testfunk func, string testname) {
        try { func(); }
        catch (runtime_error& e) {
            cerr << testname << " error: " << e.what() << endl;
            ++fail_count;
        }
    }
    ~testrunner() {
        if (fail_count > 0) {
            cerr << fail_count << " tests failed. terminating process" << endl;
            exit(1);
        }
    }
private:
    int fail_count = 0;
    
};

void testall() {
    testrunner tr;
    tr.runtest(test_sum, "test_sum");
    tr.runtest(test_addsynonims, "test_addsynonims");
    tr.runtest(test_getsyncount, "test_getsyncount");
    tr.runtest(test_aresynonims, "test_aresynonims");
}

int main()
{
    int mode;
    cout << "select mode(0-main/other-test)" << endl;
    cin >> mode;
    if (mode == 0) {
        string operator_code;
        int q;
        cin >> q;
        map<string, set<string>> synonims;
        for (int i = 0; i < q; i++) {
            cin >> operator_code;
        }
        if (operator_code == "add") {
            string f_word, sec_word;
            cin >> f_word >> sec_word;
            addsynonims(synonims, f_word, sec_word);
        }
        else if (operator_code == "count") {
            string word;
            cin >> word;
            cout << getsyncount(synonims, word) << endl;
        }
        else if (operator_code == "check") {
            string f_word, sec_word;
            cin >> f_word >> sec_word;
            if (aresynonims(synonims, f_word, sec_word) == 1)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
    else {
        try {
            testall();
        }
        catch (runtime_error& e) {
            cerr << "error: " << e.what() << endl;
        }
    }
    return 0;
}