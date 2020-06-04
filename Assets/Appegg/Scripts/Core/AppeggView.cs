﻿using System;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class AppeggView : MonoBehaviour {
   
   [SerializeField] private AppeggViewType _appeggViewType;

   private UIProgressBar _progressBar;
   private Text _primaryText,_secondaryText; 
   private Button _primaryButton, _secondaryButton;
   
   public void Init() {
      switch (_appeggViewType) {
         case AppeggViewType.Loading:
            _progressBar = GetComponentInChildren<UIProgressBar>();
            _primaryText = GetComponentInChildren<Text>();
            break;
         case AppeggViewType.Changelog:
            var texts = GetComponentsInChildren<Text>();
            var buttons = GetComponentsInChildren<Button>();
            _primaryText = texts[0];
            _secondaryText = texts[1];
            _primaryButton = buttons[0];
            _secondaryButton = buttons[1];
            break;
         case AppeggViewType.Error:
            _primaryText = GetComponentInChildren<Text>();
            _primaryButton = GetComponentInChildren<Button>();
            break;
         default:
            throw new ArgumentOutOfRangeException();
      }
   }
   
   public void Hide() => gameObject.SetActive(false);

   public void Show() => gameObject.SetActive(true);
   
   public void SetProgress(float v, bool instant =false) =>_progressBar.SetProgress(v,instant);

   public void SetPrimaryText(string str) => _primaryText.text = str;
   
   public void SetSecondaryText(string str) => _secondaryText.text = str;
   
   public void SetPrimaryButtonListener(UnityAction act) => _primaryButton.onClick.AddListener(act);
   
   public void SetSecondaryButtonListener(UnityAction act) => _secondaryButton.onClick.AddListener(act);
   
}

/// <summary>
/// Changelog:TitleText>ContentText>CloseButton>PrivacyButton
/// ErrorView:MessageText>RetryButton
/// LoadingView:NetworkImage>LoadingText>UIProgressBar
/// </summary>
public enum AppeggViewType { Loading,Changelog,Error,}