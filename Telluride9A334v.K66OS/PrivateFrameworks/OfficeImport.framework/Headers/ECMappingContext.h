/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECMappingContext : NSObject {
@private
	CFDictionaryRef mIndexToMappedIndex;	// 4 = 0x4
	NSMutableDictionary *mSheetNameToMappedIndex;	// 8 = 0x8
	CFDictionaryRef mObjectToMappingInfo;	// 12 = 0xc
	NSMutableArray *mMappingInfos;	// 16 = 0x10
}
+ (id)mappingContext;	// 0x357394a1
- (id)init;	// 0x357393cd
- (void)associateMappingInfo:(id)info withSheetName:(id)sheetName andSheetIndex:(unsigned)index andObject:(id)object;	// 0x3573979d
- (void)dealloc;	// 0x35739711
- (unsigned)mappedSheetIndexForSheetIndex:(unsigned)sheetIndex;	// 0x357395a5
- (unsigned)mappedSheetIndexForSheetName:(id)sheetName;	// 0x35739561
- (ChVector<OcText> *)mappedSheetNames;	// 0x357395c1
- (id)mappingInfoAtIndex:(unsigned)index;	// 0x357394e9
- (unsigned)mappingInfoCount;	// 0x3573952d
- (id)mappingInfoForObject:(id)object;	// 0x3573954d
@end

