/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "SBSlidingAlertDisplay.h"
#import "SpringBoard-Structs.h"

@class UITable, NSArray;

@interface SBSIMToolkitListDisplay : SBSlidingAlertDisplay {
	UITable *_table;
	NSArray *_items;
}
+(id)createTopBarForInstance:(id)instance;
-(void)dealloc;
-(id)_simToolkitListItems;
-(void)_selectListItem:(unsigned long)item;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)showsDesktopImage;
-(void)setMiddleContentAlpha:(float)alpha;
-(void)alertDisplayWillBecomeVisible;
-(void)navigationBar:(id)bar buttonClicked:(int)clicked;
-(int)numberOfRowsInTable:(id)table;
-(id)table:(id)table cellForRow:(int)row column:(id)column;
-(void)tableSelectionDidChange:(id)tableSelection;
@end
