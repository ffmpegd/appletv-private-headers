/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "TSUDataFormat.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface TSUDurationFormat : NSObject <NSCopying, TSUDataFormat> {
	NSString *mFormat;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
}
@property(retain) id formatName;	// G=0x371eed3d; S=0x371eed4d; converted property
+ (id)formatWithFormat:(id)format name:(id)name;	// 0x371eea75
- (id)initWithFormat:(id)format name:(id)name;	// 0x371eeab5
- (id)copyWithZone:(NSZone *)zone;	// 0x371eeb2d
- (void)dealloc;	// 0x371eeb85
- (id)description;	// 0x371eecd9
- (id)format;	// 0x371eed2d
// converted property getter: - (id)formatName;	// 0x371eed3d
- (unsigned)hash;	// 0x371eec99
- (BOOL)isEqual:(id)equal;	// 0x371eebfd
// converted property setter: - (void)setFormatName:(id)name;	// 0x371eed4d
@end
