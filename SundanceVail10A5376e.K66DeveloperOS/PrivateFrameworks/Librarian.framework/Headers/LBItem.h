/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface LBItem : NSObject {
	NSURL *_url;	// 4 = 0x4
	NSMutableDictionary *_attributes;	// 8 = 0x8
	id _replacement;	// 12 = 0xc
}
@property(assign, nonatomic) id replacement;	// G=0x345d6445; S=0x345d6455; @synthesize=_replacement
@property(readonly, retain) NSURL *url;	// G=0x345d6031; converted property
- (id)initWithURL:(id)url;	// 0x345d5db9
- (id)initWithURL:(id)url itemUpdateInfo:(id)info;	// 0x345d5e0d
- (id)_attributes;	// 0x345d6061
- (id)attributeForName:(id)name;	// 0x345d6275
- (id)attributeNames;	// 0x345d62f5
- (id)attributesForNames:(id)names;	// 0x345d631d
- (void)dealloc;	// 0x345d5fcd
- (id)path;	// 0x345d6041
// declared property getter: - (id)replacement;	// 0x345d6445
// declared property setter: - (void)setReplacement:(id)replacement;	// 0x345d6455
- (void)updateInfo:(id)info;	// 0x345d5f7d
// converted property getter: - (id)url;	// 0x345d6031
- (id)valueForKey:(id)key;	// 0x345d62a1
@end

