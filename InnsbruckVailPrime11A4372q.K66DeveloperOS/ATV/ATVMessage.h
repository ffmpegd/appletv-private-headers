/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVMessage : XXUnknownSuperclass {
	NSString *_identifier;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	NSArray *_entries;	// 12 = 0xc
}
@property(readonly, assign) NSArray *entries;	// G=0x4b105d; @synthesize=_entries
@property(readonly, assign) NSString *identifier;	// G=0x4b1035; @synthesize=_identifier
@property(readonly, assign) NSString *title;	// G=0x4b1049; @synthesize=_title
- (id)initWithIdentifier:(id)identifier withTitle:(id)title entries:(id)entries;	// 0x4b0f65
- (void).cxx_destruct;	// 0x4b1071
// declared property getter: - (id)entries;	// 0x4b105d
// declared property getter: - (id)identifier;	// 0x4b1035
// declared property getter: - (id)title;	// 0x4b1049
@end
