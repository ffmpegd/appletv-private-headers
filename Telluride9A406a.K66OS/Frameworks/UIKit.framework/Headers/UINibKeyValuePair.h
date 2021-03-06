/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UINibKeyValuePair : NSObject {
@private
	id object;	// 4 = 0x4
	NSString *keyPath;	// 8 = 0x8
	id value;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *keyPath;	// G=0x35a0da91; @synthesize
@property(readonly, assign, nonatomic) id object;	// G=0x35a0da81; @synthesize
@property(readonly, assign, nonatomic) id value;	// G=0x35a0daa1; @synthesize
- (id)initWithCoder:(id)coder;	// 0x35a0d93d
- (id)initWithObject:(id)object keyPath:(id)path value:(id)value;	// 0x35a0d715
- (void)apply;	// 0x35a0d825
- (void)applyForSimulator;	// 0x35a0d861
- (void)dealloc;	// 0x35a0d7b1
- (void)encodeWithCoder:(id)coder;	// 0x35a0da09
// declared property getter: - (id)keyPath;	// 0x35a0da91
// declared property getter: - (id)object;	// 0x35a0da81
// declared property getter: - (id)value;	// 0x35a0daa1
@end

