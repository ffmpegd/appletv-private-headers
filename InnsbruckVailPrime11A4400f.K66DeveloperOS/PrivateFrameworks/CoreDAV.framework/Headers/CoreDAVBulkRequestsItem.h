/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet, NSSet, NSDictionary, CoreDAVLeafItem;

@interface CoreDAVBulkRequestsItem : CoreDAVItem {
	CoreDAVLeafItem *_maxResourcesItem;	// 28 = 0x1c
	CoreDAVLeafItem *_maxSizeItem;	// 32 = 0x20
	NSMutableSet *_supportedItems;	// 36 = 0x24
}
@property(readonly, assign) NSDictionary *dictRepresentation;	// G=0x304aab81; 
@property(readonly, assign) int maxResources;	// G=0x304aad6d; 
@property(retain) CoreDAVLeafItem *maxResourcesItem;	// G=0x304ab1ad; S=0x304ab1c1; @synthesize=_maxResourcesItem
@property(readonly, assign) int maxSize;	// G=0x304aada5; 
@property(retain) CoreDAVLeafItem *maxSizeItem;	// G=0x304ab1d1; S=0x304ab1e5; @synthesize=_maxSizeItem
@property(readonly, assign) NSSet *supportedItems;	// G=0x304ab1f5; @synthesize=_supportedItems
@property(readonly, assign) BOOL supportsDelete;	// G=0x304ab179; 
@property(readonly, assign) BOOL supportsInsert;	// G=0x304ab111; 
@property(readonly, assign) BOOL supportsUpdate;	// G=0x304ab145; 
+ (id)copyParseRules;	// 0x304aa8ed
- (id)init;	// 0x304aa6f1
- (void)addSupportedItem:(id)item;	// 0x304aa881
- (void)dealloc;	// 0x304aa721
- (id)description;	// 0x304aa799
// declared property getter: - (id)dictRepresentation;	// 0x304aab81
// declared property getter: - (int)maxResources;	// 0x304aad6d
// declared property getter: - (id)maxResourcesItem;	// 0x304ab1ad
// declared property getter: - (int)maxSize;	// 0x304aada5
// declared property getter: - (id)maxSizeItem;	// 0x304ab1d1
// declared property setter: - (void)setMaxResourcesItem:(id)item;	// 0x304ab1c1
// declared property setter: - (void)setMaxSizeItem:(id)item;	// 0x304ab1e5
// declared property getter: - (id)supportedItems;	// 0x304ab1f5
// declared property getter: - (BOOL)supportsDelete;	// 0x304ab179
// declared property getter: - (BOOL)supportsInsert;	// 0x304ab111
- (BOOL)supportsItemWithNameSpace:(id)nameSpace name:(id)name;	// 0x304aaddd
// declared property getter: - (BOOL)supportsUpdate;	// 0x304ab145
@end
