/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABBlip : NSObject {
}
+ (int)blipTypeForBlipSignature:(int)blipSignature;	// 0x30d2b3ed
+ (id)compressMetafileData:(id)data info:(EshMetafileBlipInfo *)info;	// 0x30edcbd5
+ (id)delayedSubBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x30d2b171
+ (id)dibFileContentsWithDibBlipData:(const OcBinaryData *)dibBlipData;	// 0x30edc441
+ (id)readBlipFromBse:(id)bse;	// 0x30c9f339
+ (id)readBlipFromEshBlip:(EshBlip *)eshBlip;	// 0x30c9f425
+ (void)setMetafileBoundsFromPictData:(id)pictData info:(EshMetafileBlipInfo *)info;	// 0x30edc43d
+ (id)subBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x30edc981
+ (EshBlip *)writeBlip:(id)blip;	// 0x30edc559
+ (void)writeBlip:(id)blip toBlipStoreEntry:(EshBSE *)blipStoreEntry;	// 0x30edc895
+ (void)writeEmptyBlipStoreEntry:(EshBSE *)entry;	// 0x30edc539
@end

