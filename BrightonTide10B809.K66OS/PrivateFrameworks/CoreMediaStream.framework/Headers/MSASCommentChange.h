/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class MSASComment;

@interface MSASCommentChange : NSObject {
	MSASComment *_comment;	// 4 = 0x4
	int _deletionIndex;	// 8 = 0x8
	int _type;	// 12 = 0xc
}
@property(retain, nonatomic) MSASComment *comment;	// G=0x3377bd05; S=0x3377bd15; @synthesize=_comment
@property(assign, nonatomic) int deletionIndex;	// G=0x3377bd3d; S=0x3377bd4d; @synthesize=_deletionIndex
@property(assign, nonatomic) int type;	// G=0x3377bd5d; S=0x3377bd6d; @synthesize=_type
- (void).cxx_destruct;	// 0x3377bd7d
// declared property getter: - (id)comment;	// 0x3377bd05
// declared property getter: - (int)deletionIndex;	// 0x3377bd3d
- (id)description;	// 0x3377bc39
// declared property setter: - (void)setComment:(id)comment;	// 0x3377bd15
// declared property setter: - (void)setDeletionIndex:(int)index;	// 0x3377bd4d
// declared property setter: - (void)setType:(int)type;	// 0x3377bd6d
// declared property getter: - (int)type;	// 0x3377bd5d
@end

