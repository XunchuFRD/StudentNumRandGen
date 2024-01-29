VERSION 5.00
Begin VB.Form Form1 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "主程序"
   ClientHeight    =   7840
   ClientLeft      =   9324
   ClientTop       =   4732
   ClientWidth     =   12614
   Icon            =   "Form1.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   Picture         =   "Form1.frx":1084A
   ScaleHeight     =   7840
   ScaleWidth      =   12614
   StartUpPosition =   2  '屏幕中心
   Begin VB.CommandButton Command4 
      Caption         =   "退出"
      BeginProperty Font 
         Name            =   "宋体"
         Size            =   17.82
         Charset         =   134
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   644
      Left            =   10962
      TabIndex        =   6
      Top             =   6804
      Width           =   1400
   End
   Begin VB.CommandButton Command3 
      Caption         =   "抽取"
      BeginProperty Font 
         Name            =   "宋体"
         Size            =   17.82
         Charset         =   134
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   770
      Left            =   5607
      TabIndex        =   5
      Top             =   6678
      Width           =   1400
   End
   Begin VB.CommandButton Command2 
      Caption         =   "配置"
      BeginProperty Font 
         Name            =   "宋体"
         Size            =   17.82
         Charset         =   134
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   644
      Left            =   10962
      TabIndex        =   3
      Top             =   5166
      Width           =   1400
   End
   Begin VB.CommandButton Command1 
      Caption         =   "关于"
      BeginProperty Font 
         Name            =   "宋体"
         Size            =   17.82
         Charset         =   134
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   644
      Left            =   10962
      TabIndex        =   2
      Top             =   5985
      Width           =   1400
   End
   Begin VB.Label Label3 
      BackStyle       =   0  'Transparent
      Caption         =   "结果：等待抽取"
      BeginProperty Font 
         Name            =   "华文中宋"
         Size            =   42.06
         Charset         =   134
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H00C0C000&
      Height          =   3668
      Left            =   826
      TabIndex        =   4
      Top             =   2646
      Width           =   9968
   End
   Begin VB.Label Label2 
      BackStyle       =   0  'Transparent
      Caption         =   "默认抽取范围是1-41，每次输出一个结果，若要改变请单击“配置”按钮"
      BeginProperty Font 
         Name            =   "宋体"
         Size            =   14.26
         Charset         =   134
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H000000FF&
      Height          =   392
      Left            =   1827
      TabIndex        =   1
      Top             =   2268
      Width           =   8960
   End
   Begin VB.Label Label1 
      BackStyle       =   0  'Transparent
      Caption         =   "欢迎使用学号随机抽取系统"
      BeginProperty Font 
         Name            =   "方正姚体"
         Size            =   42.06
         Charset         =   134
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H00000000&
      Height          =   1022
      Left            =   1134
      TabIndex        =   0
      Top             =   882
      Width           =   10346
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Form3.Visible = True
End Sub

Private Sub Command2_Click()
Form4.Visible = True
End Sub

Private Sub Command3_Click()
Randomize
i = y
Dim a As Integer
If y = 1 Then
    Label3.Caption = "等待中"
    a = Int(Rnd * (n - m + 1)) + m
        While a = 32
          a = Int(Rnd * (n - m + 1)) + m
        Wend
    
        If a = 22 Then
            Form2.Visible = True
            Form1.Visible = False
            Label3.Caption = "结果：等待抽取"
        Else
            Label3.Caption = "结果：" + Str(a) + "号"
        End If
Else
    Label3.Caption = "结果："
    While i > 0
        a = Int(Rnd * (n - m + 1)) + m
        While a = 32
            a = Int(Rnd * (n - m + 1)) + m
        Wend
    If a > 0 And a < 10 Then
        c = "0" + Str(a)
        c = Replace(c, " ", "")
    Else
        c = Str(a)
    End If
    Label3.Caption = Label3.Caption + " " + c
    i = i - 1
    Wend
End If

End Sub

Private Sub Command4_Click()
End
End Sub


Private Sub Form_Load()
m = 1
n = 41
y = 1
End Sub

