namespace totaly_not_osu
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
            this.components = new System.ComponentModel.Container();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.scorelb = new System.Windows.Forms.Label();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.timer2 = new System.Windows.Forms.Timer(this.components);
            this.timelab = new System.Windows.Forms.Label();
            this.startlb = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // timer1
            // 
            this.timer1.Enabled = true;
            this.timer1.Interval = 10;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // scorelb
            // 
            this.scorelb.AutoSize = true;
            this.scorelb.BackColor = System.Drawing.Color.Transparent;
            this.scorelb.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.scorelb.Location = new System.Drawing.Point(910, 128);
            this.scorelb.Name = "scorelb";
            this.scorelb.Size = new System.Drawing.Size(44, 20);
            this.scorelb.TabIndex = 0;
            this.scorelb.Text = "score";
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(1033, 3);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(217, 27);
            this.textBox1.TabIndex = 1;
            // 
            // timer2
            // 
            this.timer2.Enabled = true;
            this.timer2.Tick += new System.EventHandler(this.timer2_Tick);
            // 
            // timelab
            // 
            this.timelab.AutoSize = true;
            this.timelab.BackColor = System.Drawing.Color.Transparent;
            this.timelab.Font = new System.Drawing.Font("Segoe UI", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.timelab.ForeColor = System.Drawing.SystemColors.Control;
            this.timelab.Location = new System.Drawing.Point(375, 55);
            this.timelab.Name = "timelab";
            this.timelab.Size = new System.Drawing.Size(81, 35);
            this.timelab.TabIndex = 2;
            this.timelab.Text = "label1";
            // 
            // startlb
            // 
            this.startlb.AutoSize = true;
            this.startlb.BackColor = System.Drawing.Color.Transparent;
            this.startlb.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.startlb.Location = new System.Drawing.Point(910, 180);
            this.startlb.Name = "startlb";
            this.startlb.Size = new System.Drawing.Size(50, 20);
            this.startlb.TabIndex = 3;
            this.startlb.Text = "time : ";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.Window;
            this.BackgroundImage = global::totaly_not_osu.Resource1.bg1;
            this.ClientSize = new System.Drawing.Size(1262, 773);
            this.Controls.Add(this.startlb);
            this.Controls.Add(this.timelab);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.scorelb);
            this.ForeColor = System.Drawing.SystemColors.ControlText;
            this.MaximumSize = new System.Drawing.Size(1280, 820);
            this.MinimumSize = new System.Drawing.Size(1280, 820);
            this.Name = "Form1";
            this.TopMost = true;
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Form1_FormClosing);
            this.Click += new System.EventHandler(this.Form1_Click);
            this.Paint += new System.Windows.Forms.PaintEventHandler(this.Form1_Paint);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Timer timer1;
        private Label scorelb;
        private TextBox textBox1;
        private System.Windows.Forms.Timer timer2;
        private Label timelab;
        private Label startlb;
    }
}