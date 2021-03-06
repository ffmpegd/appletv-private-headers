/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSMutableArray;

@interface DAVXMLNode : NSObject {
	NSMutableArray *_children;	// 4 = 0x4
	NSDictionary *_attributes;	// 8 = 0x8
	NSString *_content;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
}
@property(readonly, retain) NSDictionary *attributes;	// G=0x32dac461; converted property
@property(readonly, retain) NSMutableArray *children;	// G=0x32dac471; converted property
@property(retain) NSString *content;	// G=0x32dacbb9; S=0x32daccd5; converted property
@property(readonly, retain) NSString *name;	// G=0x32dac451; converted property
+ (id)collectionNode;	// 0x32dace11
+ (id)nodeWithName:(id)name attributes:(id)attributes;	// 0x32dacd89
+ (id)textNodeWithContent:(id)content;	// 0x32dacdcd
- (id)initWithName:(id)name attributes:(id)attributes;	// 0x32dacef5
- (void)addChild:(id)child;	// 0x32dacd21
// converted property getter: - (id)attributes;	// 0x32dac461
- (id)childNamed:(id)named;	// 0x32dad265
// converted property getter: - (id)children;	// 0x32dac471
- (unsigned)childrenCount;	// 0x32daca91
- (id)childrenEnumerator;	// 0x32dacab1
- (id)childrenNamed:(id)named;	// 0x32dad175
// converted property getter: - (id)content;	// 0x32dacbb9
- (id)dataUsingEncoding:(unsigned)encoding;	// 0x32dac57d
- (void)dealloc;	// 0x32dace75
- (id)description;	// 0x32daca79
- (id)hrefChildren;	// 0x32dacf7d
- (BOOL)isNamed:(id)named;	// 0x32daccad
// converted property getter: - (id)name;	// 0x32dac451
- (id)nonTextChildren;	// 0x32dad079
- (void)removeChild:(id)child;	// 0x32daccfd
// converted property setter: - (void)setContent:(id)content;	// 0x32daccd5
- (id)simpleTraverseWithPath:(id)path;	// 0x32dac545
- (id)simpleTraverseWithPathArray:(id)pathArray pos:(unsigned)pos;	// 0x32dac481
- (id)textContent;	// 0x32dacad1
- (id)xmlStringWithBag:(id)bag;	// 0x32dac5f5
@end

