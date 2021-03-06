/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADColorMap : NSObject {
@private
	NSMutableDictionary *mMappings;	// 4 = 0x4
}
- (id)init;	// 0x34433601
- (void)addDefaultMappings:(BOOL)mappings;	// 0x344352b9
- (void)addMapping:(int)mapping index:(int)index;	// 0x34435391
- (void)dealloc;	// 0x34403479
- (BOOL)isEqual:(id)equal;	// 0x34613f2d
- (int)mappingForIndex:(int)index;	// 0x3437ae01
@end

