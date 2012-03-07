/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import "CoreDAVLeafDataPayload.h"
#import "CoreDAVModifiedContainer.h"
#import "CoreDAVAddedContainer.h"
#import <CoreDAVContainer.h> // Unknown library

@class NSURL, NSDictionary, NSData, NSString, NSArray, CoreDAVErrorItem, NSMutableArray;

@interface BookmarkDAVFolder : CoreDAVContainer <CoreDAVModifiedContainer, CoreDAVAddedContainer, CoreDAVLeafDataPayload> {
	NSDictionary *_appleAttributes;	// 76 = 0x4c
	NSMutableArray *_childrenOrder;	// 80 = 0x50
	NSString *_bulkParsedCTag;	// 84 = 0x54
	NSString *_bulkParsedPTag;	// 88 = 0x58
	CoreDAVErrorItem *_bulkUploadErrorItem;	// 92 = 0x5c
}
@property(readonly, assign) NSDictionary *appleAttributes;	// G=0x30fbe415; @synthesize=_appleAttributes
@property(retain) NSString *bulkParsedCTag;	// G=0x30fbe425; S=0x30fbe439; @synthesize=_bulkParsedCTag
@property(retain) NSString *bulkParsedPTag;	// G=0x30fbe45d; S=0x30fbe471; @synthesize=_bulkParsedPTag
@property(retain) CoreDAVErrorItem *bulkUploadErrorItem;	// G=0x30fbe495; S=0x30fbe4a9; @synthesize=_bulkUploadErrorItem
@property(readonly, assign) NSArray *childrenOrder;	// G=0x30fbe405; @synthesize=_childrenOrder
@property(readonly, assign) NSData *dataPayload;	// G=0x30fbe3fd; 
@property(assign) BOOL isBookmarkBarFolder;	// G=0x30fbdc59; S=0x30fbde35; @dynamic
@property(assign) BOOL isBookmarkFolder;	// G=0x30fbdc29; S=0x30fbdd71; @dynamic
@property(assign) BOOL isBookmarkMenuFolder;	// G=0x30fbdc89; S=0x30fbdef9; @dynamic
@property(retain) NSURL *serverID;	// G=0x30fbe3e9; S=0x30fbe3f9; 
@property(readonly, assign) NSString *syncKey;	// G=0x30fbe401; 
+ (id)copyPropertyMappingsForParser;	// 0x30fbd991
- (id)initWithServerID:(id)serverID containerName:(id)name appleAttributes:(id)attributes;	// 0x30fbd6f5
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;	// 0x30fbd771
- (id)_appleAttributesString;	// 0x30fbdfbd
- (void)_faultResourceType;	// 0x30fbdcb9
// declared property getter: - (id)appleAttributes;	// 0x30fbe415
- (void)applyParsedProperties:(id)properties;	// 0x30fbda9d
// declared property getter: - (id)bulkParsedCTag;	// 0x30fbe425
// declared property getter: - (id)bulkParsedPTag;	// 0x30fbe45d
// declared property getter: - (id)bulkUploadErrorItem;	// 0x30fbe495
// declared property getter: - (id)childrenOrder;	// 0x30fbe405
- (id)copyMkcolTask;	// 0x30fbe215
- (id)copyPropPatchTask;	// 0x30fbe029
// declared property getter: - (id)dataPayload;	// 0x30fbe3fd
- (void)dealloc;	// 0x30fbd8f5
// declared property getter: - (BOOL)isBookmarkBarFolder;	// 0x30fbdc59
// declared property getter: - (BOOL)isBookmarkFolder;	// 0x30fbdc29
// declared property getter: - (BOOL)isBookmarkMenuFolder;	// 0x30fbdc89
// declared property getter: - (id)serverID;	// 0x30fbe3e9
// declared property setter: - (void)setBulkParsedCTag:(id)tag;	// 0x30fbe439
// declared property setter: - (void)setBulkParsedPTag:(id)tag;	// 0x30fbe471
// declared property setter: - (void)setBulkUploadErrorItem:(id)item;	// 0x30fbe4a9
// declared property setter: - (void)setIsBookmarkBarFolder:(BOOL)folder;	// 0x30fbde35
// declared property setter: - (void)setIsBookmarkFolder:(BOOL)folder;	// 0x30fbdd71
// declared property setter: - (void)setIsBookmarkMenuFolder:(BOOL)folder;	// 0x30fbdef9
// declared property setter: - (void)setServerID:(id)anId;	// 0x30fbe3f9
// declared property getter: - (id)syncKey;	// 0x30fbe401
@end

