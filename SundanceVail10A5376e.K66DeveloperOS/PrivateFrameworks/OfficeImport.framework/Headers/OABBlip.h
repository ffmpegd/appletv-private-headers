/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OABBlip : NSObject {
}
+ (int)blipTypeForBlipSignature:(int)blipSignature;	// 0x36fbff11
+ (id)compressMetafileData:(id)data info:(EshMetafileBlipInfo *)info;	// 0x37134369
+ (id)delayedSubBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x36fbfc99
+ (id)dibFileContentsWithDibBlipData:(const OcBinaryData *)dibBlipData;	// 0x37133f25
+ (id)readBlipFromBse:(id)bse;	// 0x36f14111
+ (id)readBlipFromEshBlip:(EshBlip *)eshBlip;	// 0x36f141cd
+ (void)setMetafileBoundsFromPictData:(id)pictData info:(EshMetafileBlipInfo *)info;	// 0x37134275
+ (id)subBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x37134019
+ (EshBlip *)writeBlip:(id)blip;	// 0x37133aa9
+ (void)writeBlip:(id)blip toBlipStoreEntry:(EshBSE *)blipStoreEntry;	// 0x37133e3d
+ (void)writeEmptyBlipStoreEntry:(EshBSE *)entry;	// 0x3713447d
@end

