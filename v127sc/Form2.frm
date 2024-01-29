VERSION 5.00
Begin VB.Form Form2 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "喜报"
   ClientHeight    =   6762
   ClientLeft      =   42
   ClientTop       =   378
   ClientWidth     =   9086
   Icon            =   "Form2.frx":0000
   LinkTopic       =   "Form2"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   Picture         =   "Form2.frx":1084A
   ScaleHeight     =   6762
   ScaleWidth      =   9086
   StartUpPosition =   2  '屏幕中心
   Begin VB.CommandButton Command1 
      Caption         =   "返回再次抽取"
      Height          =   896
      Left            =   5292
      TabIndex        =   0
      Top             =   4158
      Width           =   2408
   End
End
Attribute VB_Name = "Form2"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Label1_Click()

End Sub

Private Sub Command1_Click()
Form2.Visible = False
Form1.Visible = True
End Sub
