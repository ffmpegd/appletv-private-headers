/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
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
@property(readonly, assign, nonatomic) int endKeyIndex;	// G=0x331c3651; @synthesize=m_endKeyIndex
@property(readonly, assign, nonatomic) unsigned flags;	// G=0x331c3621; @synthesize=m_flags
@property(readonly, assign, nonatomic) BOOL isAttributesReference;	// G=0x331c34f1; 
@property(readonly, assign, nonatomic) BOOL isGeometryReference;	// G=0x331c34dd; 
@property(readonly, assign, nonatomic) BOOL isKeyIndexRangeReference;	// G=0x331c34c9; 
@property(readonly, assign, nonatomic) BOOL isKeyIndexReference;	// G=0x331c34b5; 
@property(readonly, assign, nonatomic) BOOL isKeylistReference;	// G=0x331c3479; 
@property(readonly, assign, nonatomic) BOOL isKeysReference;	// G=0x331c348d; 
@property(readonly, assign, nonatomic) BOOL isKeysetReference;	// G=0x331c3465; 
@property(readonly, assign, nonatomic) BOOL isNamedKeyReference;	// G=0x331c34a1; 
@property(readonly, assign, nonatomic) NSString *keyName;	// G=0x331c341d; 
@property(readonly, assign, nonatomic) NSString *keylistName;	// G=0x331c33d5; 
@property(retain, nonatomic) NSString *name;	// G=0x331c35b9; S=0x331c35c9; @synthesize=m_name
@property(readonly, assign, nonatomic) NSArray *nameElements;	// G=0x331c3631; @synthesize=m_nameElements
@property(readonly, assign, nonatomic) int startKeyIndex;	// G=0x331c3641; @synthesize=m_startKeyIndex
@property(retain, nonatomic) id value;	// G=0x331c35ed; S=0x331c35fd; @synthesize=m_value
+ (id)referenceWithName:(id)name value:(id)value flags:(unsigned)flags;	// 0x331c2c91
- (id)initWithCoder:(id)coder;	// 0x331c2f55
- (id)initWithName:(id)name value:(id)value flags:(unsigned)flags;	// 0x331c2ce9
- (id)copyWithZone:(NSZone *)zone;	// 0x331c3159
- (void)dealloc;	// 0x331c31dd
- (id)description;	// 0x331c3251
- (void)encodeWithCoder:(id)coder;	// 0x331c3069
- (unsigned)endIndexForListCount:(unsigned)listCount;	// 0x331c3529
// declared property getter: - (int)endKeyIndex;	// 0x331c3651
// declared property getter: - (unsigned)flags;	// 0x331c3621
// declared property getter: - (BOOL)isAttributesReference;	// 0x331c34f1
// declared property getter: - (BOOL)isGeometryReference;	// 0x331c34dd
// declared property getter: - (BOOL)isKeyIndexRangeReference;	// 0x331c34c9
// declared property getter: - (BOOL)isKeyIndexReference;	// 0x331c34b5
// declared property getter: - (BOOL)isKeylistReference;	// 0x331c3479
// declared property getter: - (BOOL)isKeysReference;	// 0x331c348d
// declared property getter: - (BOOL)isKeysetReference;	// 0x331c3465
// declared property getter: - (BOOL)isNamedKeyReference;	// 0x331c34a1
// declared property getter: - (id)keyName;	// 0x331c341d
// declared property getter: - (id)keylistName;	// 0x331c33d5
// declared property getter: - (id)name;	// 0x331c35b9
// declared property getter: - (id)nameElements;	// 0x331c3631
- (void)setFlags:(unsigned)flags setStartKeyIndex:(int)index setEndKeyIndex:(int)index3;	// 0x331c3549
// declared property setter: - (void)setName:(id)name;	// 0x331c35c9
- (void)setNameElements:(id)elements;	// 0x331c3579
// declared property setter: - (void)setValue:(id)value;	// 0x331c35fd
- (unsigned)startIndexForListCount:(unsigned)listCount;	// 0x331c3509
// declared property getter: - (int)startKeyIndex;	// 0x331c3641
// declared property getter: - (id)value;	// 0x331c35ed
@end
