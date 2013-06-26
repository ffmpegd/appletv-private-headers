/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import "NSObject.h"


@protocol NDBackgroundSessionProtocol <NSObject>
- (void)cancelTaskWithIdentifier:(unsigned)identifier;
- (void)cancelTaskWithIdentifier:(unsigned)identifier byProducingResumeData:(id)data;
- (void)downloadTaskWithRequest:(id)request originalRequest:(id)request2 identifier:(unsigned)identifier;
- (void)downloadTaskWithResumeData:(id)resumeData identifier:(unsigned)identifier;
- (void)resumeTaskWithIdentifier:(unsigned)identifier;
- (void)setDescription:(id)description forTask:(unsigned)task;
- (void)suspendTaskWithIdentifier:(unsigned)identifier;
- (void)uploadTaskWithRequest:(id)request originalRequest:(id)request2 fromFile:(id)file identifier:(unsigned)identifier;
@end
