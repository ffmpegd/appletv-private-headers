/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;
@protocol DAFolderChangeConsumer;

@interface DAFolderChange : NSObject <NSCoding> {
	int _changeType;	// 4 = 0x4
	NSString *_folderId;	// 8 = 0x8
	NSString *_parentFolderId;	// 12 = 0xc
	NSString *_displayName;	// 16 = 0x10
	int _dataclass;	// 20 = 0x14
	BOOL _renameOnCollision;	// 24 = 0x18
	unsigned _taskId;	// 28 = 0x1c
	id<DAFolderChangeConsumer> _consumer;	// 32 = 0x20
}
@property(readonly, assign) int changeType;	// G=0x3078218d; @synthesize=_changeType
@property(assign) id<DAFolderChangeConsumer> consumer;	// G=0x307821dd; S=0x307821ed; @synthesize=_consumer
@property(readonly, assign) int dataclass;	// G=0x307821cd; @synthesize=_dataclass
@property(readonly, assign) NSString *displayName;	// G=0x307821bd; @synthesize=_displayName
@property(readonly, assign) NSString *folderId;	// G=0x3078219d; @synthesize=_folderId
@property(readonly, assign) NSString *parentFolderId;	// G=0x307821ad; @synthesize=_parentFolderId
@property(assign) BOOL renameOnCollision;	// G=0x3078221d; S=0x3078222d; @synthesize=_renameOnCollision
@property(assign) unsigned taskId;	// G=0x307821fd; S=0x3078220d; @synthesize=_taskId
- (id)initFolderChangeWithChangeType:(int)changeType folderId:(id)anId parentFolderId:(id)anId3 displayName:(id)name dataclass:(int)dataclass consumer:(id)consumer;	// 0x30781829
- (id)initWithCoder:(id)coder;	// 0x30781db9
// declared property getter: - (int)changeType;	// 0x3078218d
// declared property getter: - (id)consumer;	// 0x307821dd
// declared property getter: - (int)dataclass;	// 0x307821cd
- (void)dealloc;	// 0x30781c95
- (id)description;	// 0x30781d09
// declared property getter: - (id)displayName;	// 0x307821bd
- (void)encodeWithCoder:(id)coder;	// 0x30781f85
// declared property getter: - (id)folderId;	// 0x3078219d
// declared property getter: - (id)parentFolderId;	// 0x307821ad
// declared property getter: - (BOOL)renameOnCollision;	// 0x3078221d
// declared property setter: - (void)setConsumer:(id)consumer;	// 0x307821ed
- (void)setDisplayName:(id)name;	// 0x30782149
- (void)setFolderId:(id)anId;	// 0x30782105
// declared property setter: - (void)setRenameOnCollision:(BOOL)collision;	// 0x3078222d
// declared property setter: - (void)setTaskId:(unsigned)anId;	// 0x3078220d
// declared property getter: - (unsigned)taskId;	// 0x307821fd
@end

