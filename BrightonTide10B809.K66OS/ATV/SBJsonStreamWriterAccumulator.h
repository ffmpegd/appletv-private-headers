/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBJsonStreamWriterDelegate.h"

@class NSData, NSMutableData;

@interface SBJsonStreamWriterAccumulator : XXUnknownSuperclass <SBJsonStreamWriterDelegate> {
	NSMutableData *data;	// 4 = 0x4
}
@property(readonly, assign) NSData *data;	// G=0x4c0ed5; @synthesize
- (id)init;	// 0x4c0df1
// declared property getter: - (id)data;	// 0x4c0ed5
- (void)dealloc;	// 0x4c0e61
- (void)writer:(id)writer appendBytes:(const void *)bytes length:(unsigned)length;	// 0x4c0ead
@end

