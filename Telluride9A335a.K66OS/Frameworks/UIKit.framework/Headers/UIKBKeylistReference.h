/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class NSString, NSArray;

@interface UIKBKeylistReference : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	id m_value;	// 8 = 0x8
	NSArray *m_nameElements;	// 12 = 0xc
	int m_startKeyIndex;	// 16 = 0x10
	int m_endKeyIndex;	// 20 = 0x14
	unsigned m_flags;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) int endKeyIndex;	// G=0x33c7e7e9; @synthesize=m_endKeyIndex
@property(readonly, assign, nonatomic) unsigned flags;	// G=0x33c7e7b9; @synthesize=m_flags
@property(readonly, assign, nonatomic) BOOL isAttributesReference;	// G=0x33c7e689; 
@property(readonly, assign, nonatomic) BOOL isGeometryReference;	// G=0x33c7e675; 
@property(readonly, assign, nonatomic) BOOL isKeyIndexRangeReference;	// G=0x33c7e661; 
@property(readonly, assign, nonatomic) BOOL isKeyIndexReference;	// G=0x33c7e64d; 
@property(readonly, assign, nonatomic) BOOL isKeylistReference;	// G=0x33c7e611; 
@property(readonly, assign, nonatomic) BOOL isKeysReference;	// G=0x33c7e625; 
@property(readonly, assign, nonatomic) BOOL isKeysetReference;	// G=0x33c7e5fd; 
@property(readonly, assign, nonatomic) BOOL isNamedKeyReference;	// G=0x33c7e639; 
@property(readonly, assign, nonatomic) NSString *keyName;	// G=0x33c7e5b5; 
@property(readonly, assign, nonatomic) NSString *keylistName;	// G=0x33c7e56d; 
@property(retain, nonatomic) NSString *name;	// G=0x33c7e751; S=0x33c7e761; @synthesize=m_name
@property(readonly, assign, nonatomic) NSArray *nameElements;	// G=0x33c7e7c9; @synthesize=m_nameElements
@property(readonly, assign, nonatomic) int startKeyIndex;	// G=0x33c7e7d9; @synthesize=m_startKeyIndex
@property(retain, nonatomic) id value;	// G=0x33c7e785; S=0x33c7e795; @synthesize=m_value
+ (id)referenceWithName:(id)name value:(id)value flags:(unsigned)flags;	// 0x33c7de29
- (id)initWithCoder:(id)coder;	// 0x33c7e0ed
- (id)initWithName:(id)name value:(id)value flags:(unsigned)flags;	// 0x33c7de81
- (id)copyWithZone:(NSZone *)zone;	// 0x33c7e2f1
- (void)dealloc;	// 0x33c7e375
- (id)description;	// 0x33c7e3e9
- (void)encodeWithCoder:(id)coder;	// 0x33c7e201
- (unsigned)endIndexForListCount:(unsigned)listCount;	// 0x33c7e6c1
// declared property getter: - (int)endKeyIndex;	// 0x33c7e7e9
// declared property getter: - (unsigned)flags;	// 0x33c7e7b9
// declared property getter: - (BOOL)isAttributesReference;	// 0x33c7e689
// declared property getter: - (BOOL)isGeometryReference;	// 0x33c7e675
// declared property getter: - (BOOL)isKeyIndexRangeReference;	// 0x33c7e661
// declared property getter: - (BOOL)isKeyIndexReference;	// 0x33c7e64d
// declared property getter: - (BOOL)isKeylistReference;	// 0x33c7e611
// declared property getter: - (BOOL)isKeysReference;	// 0x33c7e625
// declared property getter: - (BOOL)isKeysetReference;	// 0x33c7e5fd
// declared property getter: - (BOOL)isNamedKeyReference;	// 0x33c7e639
// declared property getter: - (id)keyName;	// 0x33c7e5b5
// declared property getter: - (id)keylistName;	// 0x33c7e56d
// declared property getter: - (id)name;	// 0x33c7e751
// declared property getter: - (id)nameElements;	// 0x33c7e7c9
- (void)setFlags:(unsigned)flags setStartKeyIndex:(int)index setEndKeyIndex:(int)index3;	// 0x33c7e6e1
// declared property setter: - (void)setName:(id)name;	// 0x33c7e761
- (void)setNameElements:(id)elements;	// 0x33c7e711
// declared property setter: - (void)setValue:(id)value;	// 0x33c7e795
- (unsigned)startIndexForListCount:(unsigned)listCount;	// 0x33c7e6a1
// declared property getter: - (int)startKeyIndex;	// 0x33c7e7d9
// declared property getter: - (id)value;	// 0x33c7e785
@end

