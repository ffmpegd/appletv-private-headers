/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBJsonStreamParserDelegate.h"

@class NSMutableDictionary, NSMutableArray;
@protocol SBJsonStreamParserAdapterDelegate;

@interface SBJsonStreamParserAdapter : XXUnknownSuperclass <SBJsonStreamParserDelegate> {
	id<SBJsonStreamParserAdapterDelegate> delegate;	// 4 = 0x4
	unsigned levelsToSkip;	// 8 = 0x8
	unsigned depth;	// 12 = 0xc
	NSMutableArray *array;	// 16 = 0x10
	NSMutableDictionary *dict;	// 20 = 0x14
	NSMutableArray *keyStack;	// 24 = 0x18
	NSMutableArray *stack;	// 28 = 0x1c
	int currentType;	// 32 = 0x20
}
@property(assign) id<SBJsonStreamParserAdapterDelegate> delegate;	// G=0x490fe9; S=0x490ffd; @synthesize
@property(assign) unsigned levelsToSkip;	// G=0x491015; S=0x491029; @synthesize
- (id)init;	// 0x4909c5
- (void)dealloc;	// 0x490a71
// declared property getter: - (id)delegate;	// 0x490fe9
// declared property getter: - (unsigned)levelsToSkip;	// 0x491015
- (void)parser:(id)parser found:(id)found;	// 0x490bc1
- (void)parser:(id)parser foundBoolean:(BOOL)boolean;	// 0x490f49
- (void)parser:(id)parser foundNumber:(id)number;	// 0x490fc9
- (void)parser:(id)parser foundObjectKey:(id)key;	// 0x490d79
- (void)parser:(id)parser foundString:(id)string;	// 0x490fd9
- (void)parserFoundArrayEnd:(id)end;	// 0x490ebd
- (void)parserFoundArrayStart:(id)start;	// 0x490e25
- (void)parserFoundNull:(id)null;	// 0x490f89
- (void)parserFoundObjectEnd:(id)end;	// 0x490d99
- (void)parserFoundObjectStart:(id)start;	// 0x490ce1
- (void)pop;	// 0x490ad5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x490ffd
// declared property setter: - (void)setLevelsToSkip:(unsigned)skip;	// 0x491029
@end
