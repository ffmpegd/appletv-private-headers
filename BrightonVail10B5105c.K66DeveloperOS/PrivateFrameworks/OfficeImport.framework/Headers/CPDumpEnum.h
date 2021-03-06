/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface CPDumpEnum : NSObject {
	NSString *mTypeName;	// 4 = 0x4
	NSMutableDictionary *mValueToNameMap;	// 8 = 0x8
	NSMutableDictionary *mNameToValueMap;	// 12 = 0xc
}
- (id)initWithTypeName:(id)typeName pairs:(CPDumpEnumPair *)pairs;	// 0x37baa1f1
- (void)dealloc;	// 0x37baa315
- (id)nameForValue:(long)value;	// 0x37baa3bd
- (id)typeName;	// 0x37baa38d
- (id)valueForName:(id)name;	// 0x37baa39d
@end

