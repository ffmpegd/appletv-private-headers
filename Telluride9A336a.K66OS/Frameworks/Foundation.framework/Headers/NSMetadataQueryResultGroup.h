/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSMetadataQueryResultGroup : NSObject {
@private
	id _private[9];	// 4 = 0x4
	unsigned _private2[1];	// 40 = 0x28
	void *_reserved;	// 44 = 0x2c
}
- (void)_addResult:(unsigned)result;	// 0x3369daf1
- (id)_init:(id)init :(id)arg2 :(unsigned)arg3 :(id)arg4;	// 0x3369d9c5
- (void)_zapResultArray;	// 0x3369dde5
- (id)attribute;	// 0x3369dc95
- (void)dealloc;	// 0x3369da6d
- (id)resultAtIndex:(unsigned)index;	// 0x3369dd19
- (unsigned)resultCount;	// 0x3369dcf9
- (id)results;	// 0x3369de0d
- (id)subgroups;	// 0x3369dcd9
- (id)value;	// 0x3369dcc5
@end
