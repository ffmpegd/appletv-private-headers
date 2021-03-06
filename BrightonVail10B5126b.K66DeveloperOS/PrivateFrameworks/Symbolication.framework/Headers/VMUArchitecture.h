/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "Symbolication-Structs.h"


@interface VMUArchitecture : NSObject <NSCoding, NSCopying> {
	int _cpuType;	// 4 = 0x4
	int _cpuSubtype;	// 8 = 0x8
}
@property(readonly, assign) int cpuSubtype;	// G=0x355844c5; converted property
@property(readonly, assign) int cpuType;	// G=0x355844b5; converted property
+ (id)anyArchitecture;	// 0x35583ed1
+ (id)architectureWithCpuType:(int)cpuType cpuSubtype:(int)subtype;	// 0x35583f51
+ (id)armArchitecture;	// 0x35583f41
+ (id)currentArchitecture;	// 0x35583ec1
+ (id)i386Architecture;	// 0x35583f11
+ (void)initialize;	// 0x35583d89
+ (id)ppc32Architecture;	// 0x35583ef1
+ (id)ppc64Architecture;	// 0x35583f01
+ (id)ppcArchitecture;	// 0x35583ee1
+ (id)x86_32Architecture;	// 0x35583f21
+ (id)x86_64Architecture;	// 0x35583f31
- (id)initWithCoder:(id)coder;	// 0x35583fed
- (id)initWithCpuType:(int)cpuType cpuSubtype:(int)subtype;	// 0x35583f9d
- (VMURange)commpageAddressRange;	// 0x3559cb11
- (id)copyWithZone:(NSZone *)zone;	// 0x355840cd
// converted property getter: - (int)cpuSubtype;	// 0x355844c5
// converted property getter: - (int)cpuType;	// 0x355844b5
- (id)description;	// 0x355844d5
- (void)encodeWithCoder:(id)coder;	// 0x35584071
- (unsigned)hash;	// 0x3558438d
- (BOOL)is32Bit;	// 0x355841ed
- (BOOL)is64Bit;	// 0x35584211
- (BOOL)isBigEndian;	// 0x35584121
- (BOOL)isEqual:(id)equal;	// 0x35584319
- (BOOL)isEqualToArchitecture:(id)architecture;	// 0x355842b5
- (BOOL)isLittleEndian;	// 0x35584145
- (BOOL)matchesArchitecture:(id)architecture;	// 0x355843ad
- (VMURange)objcpageAddressRange;	// 0x3559cc21
@end

