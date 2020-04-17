/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBUserNotificationAlert : SBAlertItem {
	unsigned _replyPort;
	int _token;
	int _timeout;
	unsigned _requestFlags;
	NSString *_alertHeader;
	id _alertMessage;
	NSString *_alertMessageDelimiter;
	NSString *_defaultButtonTitle;
	NSString *_alternateButtonTitle;
	NSString *_otherButtonTitle;
	id _keyboardTypes;
	id _autocapitalizationTypes;
	id _autocorrectionTypes;
	id _textFieldButtonDisplayDefaultButtonURLs;
	id _textFieldButtonImagePaths;
	id _textFieldTitles;
	id _textFieldValues;
	id _textFieldButtonDisplayTitles;
	id _textFieldButtonDisplayDefaultButtonTitles;
	int _currentTextFieldButtonDisplayIndex;
	double _creationTime;
	int _defaultButtonTag;
	unsigned _replyFlags;
	unsigned _cancel : 1;
	unsigned _isActivated : 1;
	unsigned _aboveLock : 1;
	unsigned _dismissOnLock : 1;
	unsigned _allowMenuButtonDismissal : 1;
	unsigned _oneButtonPerLine : 1;
	unsigned _groupsTextFields : 1;
}
@property(readonly, assign) int token;
-(id)_safeLocalizedValue:(id)value withBundle:(id)bundle;
-(id)initWithMessage:(id)message replyPort:(unsigned)port requestFlags:(int)flags;
-(void)dealloc;
-(Class)alertSheetClass;
-(BOOL)shouldShowInLockScreen;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)wakeup;
-(void)cancel;
-(void)_setSheetDefaultButtonTitle:(id)title;
-(void)_textFieldButtonPressed:(id)pressed;
-(void)_sendResponse:(int)response;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(void)didDeactivateForReason:(int)reason;
@end
