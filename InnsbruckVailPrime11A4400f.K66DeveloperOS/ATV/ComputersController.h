/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ComputersController : BRDataQueryController {
	NSMutableDictionary *_previews;	// 164 = 0xa4
	NSMutableArray *_listItems;	// 168 = 0xa8
	NSMutableDictionary *_listPreviews;	// 172 = 0xac
}
@property(retain, nonatomic) NSMutableArray *listItems;	// G=0x281805; S=0x281815; @synthesize=_listItems
@property(retain, nonatomic) NSMutableDictionary *listPreviews;	// G=0x28183d; S=0x28184d; @synthesize=_listPreviews
- (id)initWithServerID:(id)serverID;	// 0x27fe75
- (void).cxx_destruct;	// 0x281875
- (id)_previewKeyForIndexPath:(id)indexPath;	// 0x281749
- (BOOL)dataServerConnectionChanged:(id)changed;	// 0x2816cd
- (id)errorForNoContent;	// 0x280805
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2809b1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x281075
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x280861
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x280825
// declared property getter: - (id)listItems;	// 0x281805
// declared property getter: - (id)listPreviews;	// 0x28183d
- (id)newPreDataQuery;	// 0x280339
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x280c31
- (BOOL)preDataQueryComplete:(id)complete;	// 0x2803c1
- (BOOL)previewQueryComplete:(id)complete;	// 0x280f85
// declared property setter: - (void)setListItems:(id)items;	// 0x281815
// declared property setter: - (void)setListPreviews:(id)previews;	// 0x28184d
- (void)wasPushed;	// 0x27ff75
@end

