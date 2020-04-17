/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBAlertItem.h"
#import "UIModalViewDelegate.h"

@class UIPushButton, SBInstalledApplicationIcon;

@interface SBAppRatingsAlertItem : SBAlertItem <UIModalViewDelegate> {
	SBInstalledApplicationIcon *_icon;
	UIPushButton *_rateButton;
	BOOL _uninstallOnDismiss;
}
-(id)initWithIcon:(id)icon uninstallOnDismiss:(BOOL)dismiss;
-(void)dealloc;
-(Class)alertSheetClass;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)_starsControlValueChanged:(id)changed;
-(BOOL)shouldShowInLockScreen;
-(BOOL)dismissOnLock;
@end
