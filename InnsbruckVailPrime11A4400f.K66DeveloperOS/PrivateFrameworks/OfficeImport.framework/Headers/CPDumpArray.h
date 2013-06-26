/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CPDumpType.h"

@class NSString;

@interface CPDumpArray : CPDumpType {
	int mCount;	// 8 = 0x8
	int mCountFieldType;	// 12 = 0xc
	NSString *mCountFieldName;	// 16 = 0x10
	int mPaddingSize;	// 20 = 0x14
	CPDumpType *mElementType;	// 24 = 0x18
}
- (id)initWithCount:(int)count countFieldType:(int)type countFieldName:(id)name elementType:(id)type4;	// 0x319a3d29
- (id)initWithCount:(int)count elementType:(id)type;	// 0x319a3dc1
- (id)initWithCountFieldName:(id)countFieldName elementType:(id)type;	// 0x319a3e15
- (id)initWithCountFieldType:(int)countFieldType elementType:(id)type;	// 0x319a3de5
- (void)dealloc;	// 0x319a3e39
- (void)fromBinary:(FILE *)binary toXml:(xmlNode *)xml state:(id)state;	// 0x319a3e9d
@end
