/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CPPair : NSObject {
@private
	NSObject *m_first;	// 4 = 0x4
	BOOL m_firstIsWrapped;	// 8 = 0x8
	NSObject *m_second;	// 12 = 0xc
	BOOL m_secondIsWrapped;	// 16 = 0x10
}
@property(readonly, retain) NSObject *first;	// G=0x32a01171; converted property
@property(readonly, retain) NSObject *second;	// G=0x32a01139; converted property
+ (id)pairWithFirst:(id)first andSecond:(id)second;	// 0x32a0106d
+ (id)pairWithFirst:(id)first andSecondPointer:(id)pointer;	// 0x32a00fe9
+ (id)pairWithFirstPointer:(id)firstPointer andSecond:(id)second;	// 0x32a0102d
+ (id)pairWithFirstPointer:(id)firstPointer andSecondPointer:(id)pointer;	// 0x32a00f8d
- (id)initWithFirst:(id)first andSecond:(id)second;	// 0x32a00f0d
- (id)initWithFirst:(id)first andSecondPointer:(id)pointer;	// 0x32a01351
- (id)initWithFirstPointer:(id)firstPointer andSecond:(id)second;	// 0x32a013a9
- (id)initWithFirstPointer:(id)firstPointer andSecondPointer:(id)pointer;	// 0x32a012d9
- (void)dealloc;	// 0x32a01279
- (id)description;	// 0x32a010b9
// converted property getter: - (id)first;	// 0x32a01171
- (unsigned)hash;	// 0x32a011a9
- (BOOL)isEqual:(id)equal;	// 0x32a011e9
// converted property getter: - (id)second;	// 0x32a01139
@end
