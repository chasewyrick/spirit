/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <Foundation/NSObject.h>

@class UIBarButtonItem, UIImageView;

__attribute__((visibility("hidden")))
@interface UIBarButtonItemProxy : NSObject {
@private
	UIBarButtonItem* _item;
	UIImageView* _view;
}
-(id)initWithItem:(id)item inToolbar:(id)toolbar;
-(void)dealloc;
-(id)item;
-(id)view;
@end
