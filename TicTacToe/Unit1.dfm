object Form1: TForm1
  Left = 408
  Top = 268
  Width = 731
  Height = 557
  Caption = 'TicTacToe'
  Color = clYellow
  Constraints.MaxHeight = 557
  Constraints.MaxWidth = 731
  Constraints.MinHeight = 557
  Constraints.MinWidth = 731
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object box1: TImage
    Left = 56
    Top = 144
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = box1Click
  end
  object box2: TImage
    Left = 160
    Top = 144
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = box2Click
  end
  object box3: TImage
    Left = 264
    Top = 144
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = box3Click
  end
  object box4: TImage
    Left = 56
    Top = 248
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = box4Click
  end
  object box5: TImage
    Left = 160
    Top = 248
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = box5Click
  end
  object box6: TImage
    Left = 264
    Top = 248
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = box6Click
  end
  object box7: TImage
    Left = 56
    Top = 352
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = box7Click
  end
  object box8: TImage
    Left = 160
    Top = 352
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = box8Click
  end
  object box9: TImage
    Left = 264
    Top = 352
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = box9Click
  end
  object heading: TLabel
    Left = 64
    Top = 56
    Width = 262
    Height = 69
    Caption = 'Tic Tac Toe'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -48
    Font.Name = 'Sitka Text'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object roundtext: TLabel
    Left = 400
    Top = 344
    Width = 74
    Height = 33
    Caption = 'Round'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Sitka Text'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object roundpicture: TImage
    Left = 488
    Top = 312
    Width = 100
    Height = 100
  end
  object button1: TButton
    Left = 400
    Top = 176
    Width = 265
    Height = 57
    Cursor = crHandPoint
    Caption = 'Play with a friend'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Sitka Text'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = button1Click
  end
  object button2: TButton
    Left = 400
    Top = 240
    Width = 265
    Height = 49
    Cursor = crHandPoint
    Caption = 'Play alone'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Sitka Text'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = button2Click
  end
  object button3: TButton
    Left = 408
    Top = 192
    Width = 249
    Height = 81
    Caption = 'Restart'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Sitka Text'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = button3Click
  end
end
