/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBStatusBarContentView.h"
#import "SpringBoard-Structs.h"

@class UIImageView;

@interface SBStatusBarVPNView : SBStatusBarContentView {
	UIImageView *_imageView;
	BOOL _setOnce;
	BOOL _showIndicator;
	BOOL _showVpnView;
	BOOL _showOnLeft;
	float _overlap;
}
@property(assign) BOOL showsIndicator;
@property(assign, getter=isVisible) BOOL visible;
@property(assign) BOOL showOnLeft;
@property(assign) float overlap;
-(id)init;
-(void)updateIndicator;
-(void)setMode:(int)mode;
-(void)dealloc;
-(int)priority;
-(float)padding;
@end

