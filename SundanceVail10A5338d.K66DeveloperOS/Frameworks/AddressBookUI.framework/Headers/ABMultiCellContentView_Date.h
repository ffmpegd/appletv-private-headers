/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABMultiCellContentView.h"
#import "AddressBookUI-Structs.h"
#import "ABDateFieldDelegate.h"

@class ABDateField, NSDate;

@interface ABMultiCellContentView_Date : ABMultiCellContentView <ABDateFieldDelegate> {
	ABDateField *_dateField;	// 180 = 0xb4
}
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x370c6a75; 
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x37072091
// declared property getter: - (id)date;	// 0x370c6a75
- (void)dateFieldDateDidChange:(id)dateFieldDate;	// 0x370c6b7d
- (void)dateFieldDidBeginEditing:(id)dateField;	// 0x370c6bf9
- (void)dateFieldDidEndEditing:(id)dateField;	// 0x370c6be9
- (BOOL)dateFieldShouldBeginEditing:(id)dateField;	// 0x370c6bb9
- (BOOL)dateFieldShouldClear:(id)dateField;	// 0x370c6c0d
- (BOOL)dateFieldShouldEndEditing:(id)dateField;	// 0x370c6bd1
- (BOOL)dateFieldShouldReturn:(id)dateField;	// 0x370c6c09
- (void)dealloc;	// 0x37082a6d
- (id)hitTestForTouches:(id)touches withEvent:(id)event;	// 0x370c6a95
- (void)reload;	// 0x37077e85
- (void)reloadFromModel;	// 0x370789dd
- (void)setAbCellStyle:(int)style;	// 0x370791f1
- (void)setUpdateDelegate:(id)delegate;	// 0x37077e35
- (void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;	// 0x370780e9
- (id)viewForFirstResponder;	// 0x3707e505
@end

