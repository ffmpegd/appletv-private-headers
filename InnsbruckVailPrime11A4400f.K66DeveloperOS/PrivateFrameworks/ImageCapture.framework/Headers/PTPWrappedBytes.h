/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import </libobjc.A.h>


@interface PTPWrappedBytes : NSObject {
	unsigned long long _offset;	// 4 = 0x4
	unsigned long long _capacity;	// 12 = 0xc
	BOOL _allocatedBytes;	// 20 = 0x14
	char *_bytes;	// 24 = 0x18
	int _fd;	// 28 = 0x1c
	BOOL _useByteBuffer;	// 32 = 0x20
	unsigned long long _excessDataLength;	// 36 = 0x24
	double _progressNotificationTime;	// 44 = 0x2c
	/*function-pointer*/ void *_progressNotifier;	// 52 = 0x34
	void *_progressNotifierContext;	// 56 = 0x38
	int _lastNotifiedProgress;	// 60 = 0x3c
}
@property(readonly, assign) unsigned long long excessDataLength;	// G=0x31298b99; converted property
@property(assign) unsigned long long length64;	// G=0x31298559; S=0x31298571; converted property
@property(readonly, assign) unsigned long long offset;	// G=0x312985f9; converted property
+ (id)wrappedBytesWithBytes:(void *)bytes capacity64:(unsigned long long)a64;	// 0x312981fd
+ (id)wrappedBytesWithCapacity64:(unsigned long long)capacity64;	// 0x312981b1
- (id)init;	// 0x312982e5
- (id)initWithBytes:(void *)bytes capacity64:(unsigned long long)a64;	// 0x312982f9
- (id)initWithCapacity64:(unsigned long long)capacity64;	// 0x31298251
- (id)initWithFileDescriptor:(int)fileDescriptor capacity64:(unsigned long long)a64;	// 0x31298381
- (unsigned long long)appendBytes:(const void *)bytes length64:(unsigned long long)a64;	// 0x312988b1
- (unsigned long long)appendData:(id)data;	// 0x31298611
- (const void *)bytes;	// 0x312985c1
- (unsigned long long)capacity64;	// 0x312984c1
- (void)dealloc;	// 0x3129844d
- (id)description;	// 0x31298c29
// converted property getter: - (unsigned long long)excessDataLength;	// 0x31298b99
// converted property getter: - (unsigned long long)length64;	// 0x31298559
- (void *)mutableBytes;	// 0x312985d1
// converted property getter: - (unsigned long long)offset;	// 0x312985f9
- (double)percentFull;	// 0x31298bb1
- (unsigned long long)rewindBytesToPosition64:(unsigned long long)position64;	// 0x31298b49
- (unsigned long long)setCapacity64:(unsigned long long)a64;	// 0x312984d9
// converted property setter: - (void)setLength64:(unsigned long long)a64;	// 0x31298571
- (void)setProgressNotifierCallback:(/*function-pointer*/ void *)callback context:(void *)context;	// 0x31298405
- (BOOL)wasInitWithFD;	// 0x312985e1
@end

