//
//  CKSpaceDataViewController.h
//  Out of this World
//
//  Created by Devin Medeiros on 4/23/14.
//  Copyright (c) 2014 Cutie Killer Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CKSpaceObject.h"

@interface CKSpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) CKSpaceObject *spaceObject;

@end
