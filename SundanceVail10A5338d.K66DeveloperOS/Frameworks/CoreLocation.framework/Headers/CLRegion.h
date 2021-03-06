/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CLRegion : NSObject <NSCopying, NSCoding> {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) XXStruct_zYrK5D center;	// G=0x32a94f05; 
@property(readonly, assign, nonatomic) XXStruct_PcbLhD clientRegion;	// G=0x32a94f9d; 
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x32a94f5d; 
@property(readonly, assign, nonatomic) double radius;	// G=0x32a94f35; 
- (id)initCircularRegionWithCenter:(XXStruct_zYrK5D)center radius:(double)radius identifier:(id)identifier;	// 0x32a94121
- (id)initWithClientRegion:(XXStruct_PcbLhD)clientRegion;	// 0x32a93d21
- (id)initWithCoder:(id)coder;	// 0x32a94711
// declared property getter: - (XXStruct_zYrK5D)center;	// 0x32a94f05
// declared property getter: - (XXStruct_PcbLhD)clientRegion;	// 0x32a94f9d
- (BOOL)containsCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x32a95041
- (id)copyWithZone:(NSZone *)zone;	// 0x32a94eb1
- (void)dealloc;	// 0x32a946c5
- (id)description;	// 0x32a94fc9
- (void)encodeWithCoder:(id)coder;	// 0x32a94d75
// declared property getter: - (id)identifier;	// 0x32a94f5d
// declared property getter: - (double)radius;	// 0x32a94f35
@end

