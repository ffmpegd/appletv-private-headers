/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewCellLayoutManager.h> // Unknown library
#import "AddressBookUI-Structs.h"

@protocol ABPersonCellLayoutManagerDelegate, ABStyleProvider;

@interface ABPersonCellLayoutManager : UITableViewCellLayoutManager {
	id<ABPersonCellLayoutManagerDelegate> _delegate;	// 4 = 0x4
	id<ABStyleProvider> _styleProvider;	// 8 = 0x8
}
@property(assign, nonatomic) id<ABPersonCellLayoutManagerDelegate> delegate;	// G=0x30963949; S=0x3090f775; @synthesize=_delegate
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x3090f8b9; S=0x3090f785; @synthesize=_styleProvider
- (float)accessoryViewInsetForBounds:(CGRect)bounds;	// 0x3090f8f1
- (CGRect)backgroundEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x30915f35
- (CGRect)backgroundStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x3096340d
- (void)cell:(id)cell didTransitionToState:(unsigned)state;	// 0x30963919
- (void)cell:(id)cell willTransitionToState:(unsigned)state;	// 0x30963861
- (id)cellAsMultiCell:(id)cell;	// 0x3096331d
- (CGRect)contentEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x30915ffd
- (CGRect)contentStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x309634d5
- (void)dealloc;	// 0x3091d769
// declared property getter: - (id)delegate;	// 0x30963949
- (CGRect)deleteConfirmationRectForCell:(id)cell;	// 0x3096359d
- (float)deleteConfirmationWidth;	// 0x309633dd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3090f775
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x3090f785
// declared property getter: - (id)styleProvider;	// 0x3090f8b9
- (float)widthForCellContentViewInTableView:(id)tableView whenEditing:(BOOL)editing isShowingDeleteConfirmation:(BOOL)confirmation accessoryViewBounds:(CGRect)bounds;	// 0x3090f795
@end

