/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface CPPair : NSObject {
	NSObject *m_first;	// 4 = 0x4
	BOOL m_firstIsWrapped;	// 8 = 0x8
	NSObject *m_second;	// 12 = 0xc
	BOOL m_secondIsWrapped;	// 16 = 0x10
}
@property(readonly, retain) NSObject *first;	// G=0x349fa539; converted property
@property(readonly, retain) NSObject *second;	// G=0x349fa575; converted property
+ (id)pairWithFirst:(id)first andSecond:(id)second;	// 0x349fa149
+ (id)pairWithFirst:(id)first andSecondPointer:(id)pointer;	// 0x349fa1d5
+ (id)pairWithFirstPointer:(id)firstPointer andSecond:(id)second;	// 0x349fa195
+ (id)pairWithFirstPointer:(id)firstPointer andSecondPointer:(id)pointer;	// 0x349fa215
- (id)initWithFirst:(id)first andSecond:(id)second;	// 0x349fa26d
- (id)initWithFirst:(id)first andSecondPointer:(id)pointer;	// 0x349fa339
- (id)initWithFirstPointer:(id)firstPointer andSecond:(id)second;	// 0x349fa2e5
- (id)initWithFirstPointer:(id)firstPointer andSecondPointer:(id)pointer;	// 0x349fa38d
- (void)dealloc;	// 0x349fa405
- (id)description;	// 0x349fa5b1
// converted property getter: - (id)first;	// 0x349fa539
- (unsigned)hash;	// 0x349fa4f9
- (BOOL)isEqual:(id)equal;	// 0x349fa469
// converted property getter: - (id)second;	// 0x349fa575
@end

