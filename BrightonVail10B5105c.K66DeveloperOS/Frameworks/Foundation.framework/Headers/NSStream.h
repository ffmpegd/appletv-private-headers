/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSStream.h> // Unknown library


@interface NSStream (NSStream)
@property(assign) id delegate;	// G=0x361178c5; S=0x361178e9; converted property
- (void)close;	// 0x361178a1
// converted property getter: - (id)delegate;	// 0x361178c5
- (void)open;	// 0x3611787d
- (id)propertyForKey:(id)key;	// 0x3611790d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x36117979
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x36117955
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x361178e9
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x36117931
- (id)streamError;	// 0x361179c1
- (unsigned)streamStatus;	// 0x3611799d
@end

@interface NSStream (NSSocketStreamCreationExtensions)
+ (void)getStreamsToHost:(id)host port:(int)port inputStream:(id *)stream outputStream:(id *)stream4;	// 0x36118411
@end

