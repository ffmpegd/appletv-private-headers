/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSAKSerializer : NSObject {
	id ss;	// 4 = 0x4
}
- (id)initForSerializerStream:(id)serializerStream;	// 0x3740a261
- (void)dealloc;	// 0x3740a29d
- (unsigned)serializeData:(id)data;	// 0x3740a4b9
- (unsigned)serializeList:(id)list;	// 0x3740a5c1
- (unsigned)serializeListItemIn:(id)anIn at:(unsigned)at;	// 0x3740a6b5
- (unsigned)serializeObject:(id)object;	// 0x3740a2f9
- (unsigned)serializePListKeyIn:(id)anIn key:(id)key value:(id)value;	// 0x3740a8ad
- (unsigned)serializePListValueIn:(id)anIn key:(id)key value:(id)value;	// 0x3740a8c1
- (unsigned)serializePropertyList:(id)list;	// 0x3740a6e9
- (unsigned)serializeString:(id)string;	// 0x3740a531
- (id)serializerStream;	// 0x3740a2e9
@end
