/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray;

@interface UIKBKeyset : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_keylists;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *keylists;	// G=0x32e03a55; S=0x32e03a65; @synthesize=m_keylists
@property(retain, nonatomic) NSString *name;	// G=0x32e03a35; S=0x32e03a45; @synthesize=m_name
+ (id)keyset;	// 0x32e03519
- (id)init;	// 0x32e03561
- (id)initWithCoder:(id)coder;	// 0x32e0362d
- (BOOL)addKeylist:(id)keylist;	// 0x32e03959
- (id)copyWithZone:(NSZone *)zone;	// 0x32e036fd
- (void)dealloc;	// 0x32e035c9
- (id)description;	// 0x32e039b5
- (void)encodeWithCoder:(id)coder;	// 0x32e036a5
- (id)keylistWithName:(id)name;	// 0x32e03871
// declared property getter: - (id)keylists;	// 0x32e03a55
// declared property getter: - (id)name;	// 0x32e03a35
// declared property setter: - (void)setKeylists:(id)keylists;	// 0x32e03a65
// declared property setter: - (void)setName:(id)name;	// 0x32e03a45
@end
