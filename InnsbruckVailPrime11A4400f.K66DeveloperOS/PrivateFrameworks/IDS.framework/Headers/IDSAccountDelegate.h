/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import "NSObject.h"


@protocol IDSAccountDelegate <NSObject>
@optional
- (void)account:(id)account devicesChanged:(id)changed;
- (void)account:(id)account isActiveChanged:(BOOL)changed;
@end

