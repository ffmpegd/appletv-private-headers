/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"


@protocol UIStateRestoring <NSObject>
@optional
@property(readonly, assign, nonatomic) Class objectRestorationClass;
@property(readonly, assign, nonatomic) id<UIStateRestoring> restorationParent;
- (void)applicationFinishedRestoringState;
- (void)decodeRestorableStateWithCoder:(id)coder;
- (void)encodeRestorableStateWithCoder:(id)coder;
// declared property getter: - (Class)objectRestorationClass;
// declared property getter: - (id)restorationParent;
@end
