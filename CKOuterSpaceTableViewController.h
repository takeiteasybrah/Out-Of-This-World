//
//  CKOuterSpaceTableViewController.h
//  Out of this World
//
//  Created by Devin Medeiros on 4/8/14.
//  Copyright (c) 2014 Cutie Killer Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CKAddSpaceObjectViewController.h"

@interface CKOuterSpaceTableViewController : UITableViewController <CKAddSpaceObjectViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *planets;
@property (strong, nonatomic) NSMutableArray *addedSpaceObjects;

@end
