/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MFDataConsumer.h"

@class NSArray, NSMutableArray;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {
	NSMutableArray *_consumers;	// 4 = 0x4
	BOOL _serialAppend;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *consumers;	// G=0x3442c439; @synthesize=_consumers
@property(assign, nonatomic, getter=isSerialAppend) BOOL serialAppend;	// G=0x3442c419; S=0x3442c429; @synthesize=_serialAppend
+ (id)filterWithConsumer:(id)consumer;	// 0x3442bff5
+ (id)filterWithConsumers:(id)consumers;	// 0x3442bfb9
- (id)initWithConsumer:(id)consumer;	// 0x3442c071
- (id)initWithConsumers:(id)consumers;	// 0x3442c031
- (int)appendData:(id)data;	// 0x3442c0dd
// declared property getter: - (id)consumers;	// 0x3442c439
- (void)dealloc;	// 0x3442c3cd
- (void)done;	// 0x3442c2f5
// declared property getter: - (BOOL)isSerialAppend;	// 0x3442c419
// declared property setter: - (void)setSerialAppend:(BOOL)append;	// 0x3442c429
@end

