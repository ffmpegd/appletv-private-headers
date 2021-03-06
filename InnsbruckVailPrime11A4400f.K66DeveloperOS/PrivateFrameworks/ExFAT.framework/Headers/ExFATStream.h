/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ExFAT.framework/ExFAT
 */

#import </libobjc.A.h>
#import "UserFSStream.h"

@class ExFATItem;

@interface ExFATStream : NSObject <UserFSStream> {
	ExFATItem *_item;	// 4 = 0x4
}
@property(retain, nonatomic) ExFATItem *item;	// G=0x309af841; S=0x309af851; @synthesize=_item
@property(readonly, assign, nonatomic) unsigned long long length;	// G=0x309af7b1; 
@property(readonly, assign, nonatomic) BOOL writable;	// G=0x309af7ad; 
- (id)initWithItem:(id)item;	// 0x309af715
- (void).cxx_destruct;	// 0x309af879
- (BOOL)close;	// 0x309af7a9
- (void)dealloc;	// 0x309af765
// declared property getter: - (id)item;	// 0x309af841
// declared property getter: - (unsigned long long)length;	// 0x309af7b1
- (long)readBytesUpToLength:(unsigned long)length atOffset:(unsigned long long)offset toBuffer:(void *)buffer;	// 0x309af7f1
// declared property setter: - (void)setItem:(id)item;	// 0x309af851
// declared property getter: - (BOOL)writable;	// 0x309af7ad
@end

