//
//  CKSpaceImageViewController.h
//  Out of this World
//
//  Created by Devin Medeiros on 4/18/14.
//  Copyright (c) 2014 Cutie Killer Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CKSpaceObject.h"

@interface CKSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) CKSpaceObject *spaceObject;

@end
