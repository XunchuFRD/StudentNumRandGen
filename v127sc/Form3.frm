VERSION 5.00
Begin VB.Form Form3 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "信息"
   ClientHeight    =   2800
   ClientLeft      =   42
   ClientTop       =   378
   ClientWidth     =   4256
   Icon            =   "Form3.frx":0000
   LinkTopic       =   "Form3"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   2800
   ScaleWidth      =   4256
   StartUpPosition =   2  '屏幕中心
   Begin VB.Label Label2 
      Caption         =   "版本：V1.2.7"
      BeginProperty Font 
         Name            =   "新宋体"
         Size            =   12.12
         Charset         =   134
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   392
      Left            =   1302
      TabIndex        =   1
      Top             =   378
      Width           =   1652
   End
   Begin VB.Label Label1 
      Caption         =   "作者：夜云"
      BeginProperty Font 
         Name            =   "宋体"
         Size            =   24.24
         Charset         =   134
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   518
      Left            =   1365
      TabIndex        =   0
      Top             =   1204
      Width           =   2534
   End
   Begin VB.Image Image1 
      Height          =   896
      Left            =   357
      Picture         =   "Form3.frx":1084A
      Stretch         =   -1  'True
      Top             =   952
      Width           =   896
   End
End
Attribute VB_Name = "Form3"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
