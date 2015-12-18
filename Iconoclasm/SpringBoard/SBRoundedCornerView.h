/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/Foundation.h>
#import "SpringBoard-Structs.h"

@class SBClipCornerView, UIImageView;

@interface SBRoundedCornerView : UIView {
	SBClipCornerView *_clipCornerViews[4];
	float _cornerRadius;
	float _cornerSize;
	float _edgeInset;
	UIImageView *_imageSuperview;
}
-(id)initWithCornerRadius:(float)cornerRadius size:(float)size inset:(float)inset imageSuperview:(id)superview;
-(CGPoint)_originForCornerIndex:(int)cornerIndex withBoundsSize:(CGSize)boundsSize;
-(void)_layoutSubviews;
-(void)setFrame:(CGRect)frame;
-(void)dealloc;
@end
