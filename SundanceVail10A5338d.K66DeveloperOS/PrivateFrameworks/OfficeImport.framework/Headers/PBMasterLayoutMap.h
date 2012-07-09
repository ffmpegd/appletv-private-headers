/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface PBMasterLayoutMap : NSObject {
	NSMutableDictionary *mMasterIdToMasterInfoMap;	// 4 = 0x4
	NSMutableDictionary *mTitleIdToMasterIdInfoMap;	// 8 = 0x8
}
+ (id)masterLayoutMap;	// 0x339710f9
- (id)init;	// 0x3397113d
- (id)allMasterIds;	// 0x339c6b21
- (void)dealloc;	// 0x339de0bd
- (long)masterIdForTitleId:(long)titleId;	// 0x339c5321
- (id)masterInfoForMasterId:(long)masterId;	// 0x339c4671
- (id)masterInfoForSlideHolder:(id)slideHolder;	// 0x339c5265
- (void)setMasterId:(long)anId forTitleId:(long)titleId;	// 0x339c50cd
- (void)setMasterInfo:(id)info forMasterId:(long)masterId;	// 0x339722a5
- (id)slideLayoutForSlideHolder:(id)slideHolder;	// 0x339c9f51
@end
