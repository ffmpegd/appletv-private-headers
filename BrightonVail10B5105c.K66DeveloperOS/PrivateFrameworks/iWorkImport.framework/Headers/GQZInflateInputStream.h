/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQZEntryInputStream.h"
#import "iWorkImport-Structs.h"


@interface GQZInflateInputStream : NSObject <GQZEntryInputStream> {
	z_stream_s mStream;	// 4 = 0x4
	id<GQZEntryInputStream> mInput;	// 60 = 0x3c
}
- (id)initWithInput:(id)input;	// 0x32d1bdd5
- (id).cxx_construct;	// 0x32d1c0c9
- (void)dealloc;	// 0x32d1bf79
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x32d1c011
- (void)readToOwnBuffer:(const char **)ownBuffer size:(unsigned *)size;	// 0x32d1bfd9
@end
