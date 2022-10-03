namespace mtkurs
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.entBt = new System.Windows.Forms.Button();
            this.regBt = new System.Windows.Forms.Button();
            this.gueBt = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.statLb = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // entBt
            // 
            this.entBt.Location = new System.Drawing.Point(83, 301);
            this.entBt.Name = "entBt";
            this.entBt.Size = new System.Drawing.Size(224, 35);
            this.entBt.TabIndex = 0;
            this.entBt.Text = "Войти";
            this.entBt.UseVisualStyleBackColor = true;
            this.entBt.Click += new System.EventHandler(this.entBt_Click);
            // 
            // regBt
            // 
            this.regBt.Location = new System.Drawing.Point(83, 342);
            this.regBt.Name = "regBt";
            this.regBt.Size = new System.Drawing.Size(224, 35);
            this.regBt.TabIndex = 1;
            this.regBt.Text = "Зарегестрироваться";
            this.regBt.UseVisualStyleBackColor = true;
            this.regBt.Click += new System.EventHandler(this.regBt_Click);
            // 
            // gueBt
            // 
            this.gueBt.Location = new System.Drawing.Point(83, 383);
            this.gueBt.Name = "gueBt";
            this.gueBt.Size = new System.Drawing.Size(224, 35);
            this.gueBt.TabIndex = 2;
            this.gueBt.Text = "Войти как гость";
            this.gueBt.UseVisualStyleBackColor = true;
            this.gueBt.Click += new System.EventHandler(this.gueBt_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(83, 104);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(224, 27);
            this.textBox1.TabIndex = 3;
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(83, 199);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(224, 27);
            this.textBox2.TabIndex = 4;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(81, 73);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(52, 20);
            this.label1.TabIndex = 5;
            this.label1.Text = "Логин";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(83, 164);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(62, 20);
            this.label2.TabIndex = 6;
            this.label2.Text = "Пароль";
            // 
            // statLb
            // 
            this.statLb.AutoSize = true;
            this.statLb.Location = new System.Drawing.Point(83, 251);
            this.statLb.Name = "statLb";
            this.statLb.Size = new System.Drawing.Size(0, 20);
            this.statLb.TabIndex = 7;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(395, 486);
            this.Controls.Add(this.statLb);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.gueBt);
            this.Controls.Add(this.regBt);
            this.Controls.Add(this.entBt);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private Button entBt;
        private Button regBt;
        private Button gueBt;
        private TextBox textBox1;
        private TextBox textBox2;
        private Label label1;
        private Label label2;
        private Label statLb;
    }
}